//
//  HomeViewController.h
//  QuickBill
//
//  Created by MuttonButton on 1/6/14.
//  Copyright (c) 2014 Mutton Button. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController < ZBarReaderDelegate >

{
    UIImageView *resultImage;
    UITextView *resultText;
}
@property (nonatomic, retain) IBOutlet UIImageView *resultImage;
@property (nonatomic, retain) IBOutlet UITextView *resultText;
- (IBAction) scanButtonTapped;
//adds connections to the interface elements
@end
