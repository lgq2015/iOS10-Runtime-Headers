/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIAlertView, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate> {
    float _cellTextWidth;
    UIFont *_cellFont;
    UIAlertView *_disableRecoveryConfirmationAlert;
    BOOL _showsDisableRecoveryOption;
}

@property BOOL showsDisableRecoveryOption;


- (BOOL)showsDisableRecoveryOption;
- (void)_finishedWithSpecifier:(id)arg1;
- (void)setShowsDisableRecoveryOption:(BOOL)arg1;
- (void)nextPressed;
- (id)specifiers;
- (void)dealloc;
- (void)viewDidLoad;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end