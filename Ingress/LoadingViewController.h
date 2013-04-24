//
//  LoadingViewController.h
//  Ingress
//
//  Created by Alex Studnicka on 09.01.13.
//  Copyright (c) 2013 A&A Code. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <AVFoundation/AVFoundation.h>
#import "WheelActivityIndicatorView.h"
#import "StretchableBackgroundButton.h"
#import "TypeWriterLabel.h"
#import "CustomBackgroundColorButton.h"
#import "TPKeyboardAvoidingScrollView.h"

@interface LoadingViewController : UIViewController <UIWebViewDelegate, UITabBarControllerDelegate, UITextFieldDelegate> {
	
	NSURL *handshakeURL;
	UIWebView *_webView;
	BOOL loginProcess;

	BOOL activationStarted;
	__weak IBOutlet UIView *activationView;
	__weak IBOutlet UILabel *activationErrorLabel;
	__weak IBOutlet UITextField *activationCodeField;
	__weak IBOutlet CustomBackgroundColorButton *activationButton;

	NSString *codenameToConfirm;
	__weak IBOutlet UIView *codenameConfirmView;
	__weak IBOutlet TypeWriterLabel *codenameConfirmLabel;
	__weak IBOutlet StretchableBackgroundButton *codenameConfirmButton;
	__weak IBOutlet StretchableBackgroundButton *codenameConfirmRetryButton;

	__weak IBOutlet TPKeyboardAvoidingScrollView *createCodenameScrollview;
	__weak IBOutlet UILabel *createCodenameLabel;
	__weak IBOutlet UITextField *createCodenameField;
	__weak IBOutlet CustomBackgroundColorButton *createCodenameButton;

	__weak IBOutlet UIView *codenameConfirmationView;
	__weak IBOutlet TypeWriterLabel *codenameConfirmationLabel;

	__weak IBOutlet UIView *introView;
	__weak IBOutlet UITextView *introTextView;

	__weak IBOutlet UILabel *label;
//	__weak IBOutlet UIImageView *innerWheel;
//	__weak IBOutlet UIImageView *outerWheel;
	__weak IBOutlet WheelActivityIndicatorView *wheelActivityIndicatorView;
	
	UITabBarController *_tabBarController;
    UIImageView *_tabBarArrow;
	
}

- (IBAction)activate;
- (IBAction)createCodename;
- (IBAction)codenameConfirmRetry;
- (IBAction)codenameConfirm;

@end
