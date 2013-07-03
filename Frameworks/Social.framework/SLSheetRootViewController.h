/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class SLSheetTitleView, SLComposeServiceViewController, UINavigationItem, UITableView, UIView, UIImage, UIViewController, UITableViewController, NSArray;

@interface SLSheetRootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_sheetActions;
    UITableViewController *_tableViewController;
    SLSheetTitleView *_titleView;
    UINavigationItem *_navItem;
    UIViewController *_autoCompletionViewController;
    SLComposeServiceViewController *_delegate;
    UIView *_contentView;
    UIImage *_serviceIconImage;
}

@property SLComposeServiceViewController * delegate;
@property(retain) UIView * contentView;
@property(retain) UIImage * serviceIconImage;
@property(readonly) UITableView * tableView;


- (void)setSheetActions:(id)arg1;
- (void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(id)arg1;
- (void)presentAutoCompletionViewController:(id)arg1 apparentContentHeight:(float)arg2 contentViewChangeBlock:(id)arg3;
- (void)updateContentViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPostButtonEnabled:(BOOL)arg1;
- (void)_updateCell:(id)arg1 withSheetAction:(id)arg2;
- (void)observeSheetActions:(id)arg1;
- (void)_updateCellForSheetAction:(id)arg1;
- (id)serviceIconImage;
- (void)resetSheetActions;
- (id)sheetActions;
- (void)setServiceIconImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)tableView;
- (void)loadView;
- (void)viewDidLoad;
- (id)navigationItem;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end