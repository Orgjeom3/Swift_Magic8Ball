#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wtypedef-redefinition"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
#include <stdarg.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <CloudKit/CloudKit.h>
#import <QuartzCore/QuartzCore.h>
#import <Intents/Intents.h>
#import <CoreGraphics/CoreGraphics.h>

@class __MonoMac_NSActionDispatcher;
@class __Xamarin_NSTimerActionDispatcher;
@class __MonoMac_NSAsyncActionDispatcher;
@class Foundation_InternalNSNotificationHandler;
@class UIKit_UIControlEventProxy;
@protocol UICollectionViewSource;
@class OpenTK_Platform_iPhoneOS_CADisplayLinkTimeSource;
@class OpenTK_Platform_iPhoneOS_iPhoneOSGameView;
@class CoreBluetooth_CBCentralManager__CBCentralManagerDelegate;
@class CoreBluetooth_CBPeripheral__CBPeripheralDelegate;
@class __NSObject_Disposer;
@class UIKit_UIBarButtonItem_Callback;
@class UIKit_UIScrollView__UIScrollViewDelegate;
@class UIKit_UITextView__UITextViewDelegate;
@class ReactiveUI_BlockObserveValueDelegate;
@class ReactiveUI_ReactiveControl;
@class ReactiveUI_ReactiveControl_1;
@class ReactiveUI_ReactiveImageView;
@class ReactiveUI_ReactiveImageView_1;
@class ReactiveUI_ReactiveView;
@class ReactiveUI_ReactiveView_1;
@class ReactiveUI_ReactiveViewController;
@class ReactiveUI_ReactiveViewController_1;
@class ReactiveUI_ReactiveSplitViewController;
@class ReactiveUI_ReactiveSplitViewController_1;
@class ReactiveUI_ReactiveCollectionReusableView;
@class ReactiveUI_ReactiveCollectionReusableView_1;
@class ReactiveUI_ReactiveCollectionView;
@class ReactiveUI_ReactiveCollectionView_1;
@class ReactiveUI_ReactiveCollectionViewCell;
@class ReactiveUI_ReactiveCollectionViewCell_1;
@class ReactiveUI_ReactiveCollectionViewController;
@class ReactiveUI_ReactiveCollectionViewController_1;
@class ReactiveUI_ReactiveCollectionViewSource_1;
@class ReactiveUI_ReactiveNavigationController;
@class ReactiveUI_ReactiveNavigationController_1;
@class ReactiveUI_ReactivePageViewController;
@class ReactiveUI_ReactivePageViewController_1;
@class ReactiveUI_ReactiveTabBarController;
@class ReactiveUI_ReactiveTabBarController_1;
@class ReactiveUI_ReactiveTableView;
@class ReactiveUI_ReactiveTableView_1;
@class ReactiveUI_ReactiveTableViewCell;
@class ReactiveUI_ReactiveTableViewCell_1;
@class ReactiveUI_ReactiveTableViewController;
@class ReactiveUI_ReactiveTableViewController_1;
@class ReactiveUI_ReactiveTableViewSource_1;
@class ReactiveUI_TargetActionCommandBinder_ControlDelegate;
@class ReactiveUI_ViewModelViewHost;
@class ReactiveUI_RoutedViewHost;

@protocol UICollectionViewSource<UICollectionViewDataSource, UICollectionViewDelegate>
@end

@interface OpenTK_Platform_iPhoneOS_iPhoneOSGameView : UIView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	+(Class) layerClass;
	-(void) layoutSubviews;
	-(void) willMoveToWindow:(UIWindow *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithFrame:(CGRect)p0;
@end

@interface ReactiveUI_ReactiveControl : UIControl {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) willMoveToSuperview:(UIView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveControl_1 : ReactiveUI_ReactiveControl {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveImageView : UIImageView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) willMoveToSuperview:(UIView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveImageView_1 : ReactiveUI_ReactiveImageView {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveView : UIView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) willMoveToSuperview:(UIView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveView_1 : ReactiveUI_ReactiveView {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveViewController : UIViewController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewWillAppear:(BOOL)p0;
	-(void) viewDidDisappear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveViewController_1 : ReactiveUI_ReactiveViewController {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveSplitViewController : UISplitViewController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewWillAppear:(BOOL)p0;
	-(void) viewDidDisappear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveSplitViewController_1 : ReactiveUI_ReactiveSplitViewController {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveCollectionReusableView : UICollectionReusableView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) willMoveToSuperview:(UIView *)p0;
	-(void) removeFromSuperview;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveCollectionReusableView_1 : ReactiveUI_ReactiveCollectionReusableView {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveCollectionView : UICollectionView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) willMoveToSuperview:(UIView *)p0;
	-(void) removeFromSuperview;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface ReactiveUI_ReactiveCollectionView_1 : ReactiveUI_ReactiveCollectionView {
}
@end

@interface ReactiveUI_ReactiveCollectionViewCell : UICollectionViewCell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) willMoveToSuperview:(UIView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveCollectionViewCell_1 : ReactiveUI_ReactiveCollectionViewCell {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveCollectionViewController : UICollectionViewController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewWillAppear:(BOOL)p0;
	-(void) viewDidDisappear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveCollectionViewController_1 : ReactiveUI_ReactiveCollectionViewController {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveCollectionViewSource_1 : NSObject<UICollectionViewSource> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(UICollectionViewCell *) collectionView:(UICollectionView *)p0 cellForItemAtIndexPath:(NSIndexPath *)p1;
	-(NSInteger) numberOfSectionsInCollectionView:(UICollectionView *)p0;
	-(NSInteger) collectionView:(UICollectionView *)p0 numberOfItemsInSection:(NSInteger)p1;
	-(void) collectionView:(UICollectionView *)p0 didSelectItemAtIndexPath:(NSIndexPath *)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface ReactiveUI_ReactiveNavigationController : UINavigationController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewWillAppear:(BOOL)p0;
	-(void) viewDidDisappear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveNavigationController_1 : ReactiveUI_ReactiveNavigationController {
}
	-(id) init;
@end

@interface ReactiveUI_ReactivePageViewController : UIPageViewController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewWillAppear:(BOOL)p0;
	-(void) viewDidDisappear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactivePageViewController_1 : ReactiveUI_ReactivePageViewController {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveTabBarController : UITabBarController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewWillAppear:(BOOL)p0;
	-(void) viewDidDisappear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveTabBarController_1 : ReactiveUI_ReactiveTabBarController {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveTableView : UITableView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) willMoveToSuperview:(UIView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveTableView_1 : ReactiveUI_ReactiveTableView {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveTableViewCell : UITableViewCell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) willMoveToSuperview:(UIView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveTableViewCell_1 : ReactiveUI_ReactiveTableViewCell {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveTableViewController : UITableViewController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewWillAppear:(BOOL)p0;
	-(void) viewDidDisappear:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ReactiveUI_ReactiveTableViewController_1 : ReactiveUI_ReactiveTableViewController {
}
	-(id) init;
@end

@interface ReactiveUI_ReactiveTableViewSource_1 : NSObject<UIScrollViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(UITableViewCell *) tableView:(UITableView *)p0 cellForRowAtIndexPath:(NSIndexPath *)p1;
	-(NSInteger) numberOfSectionsInTableView:(UITableView *)p0;
	-(NSInteger) tableView:(UITableView *)p0 numberOfRowsInSection:(NSInteger)p1;
	-(BOOL) tableView:(UITableView *)p0 canEditRowAtIndexPath:(NSIndexPath *)p1;
	-(BOOL) tableView:(UITableView *)p0 canMoveRowAtIndexPath:(NSIndexPath *)p1;
	-(void) tableView:(UITableView *)p0 didSelectRowAtIndexPath:(NSIndexPath *)p1;
	-(CGFloat) tableView:(UITableView *)p0 heightForRowAtIndexPath:(NSIndexPath *)p1;
	-(CGFloat) tableView:(UITableView *)p0 heightForHeaderInSection:(NSInteger)p1;
	-(CGFloat) tableView:(UITableView *)p0 heightForFooterInSection:(NSInteger)p1;
	-(NSString *) tableView:(UITableView *)p0 titleForHeaderInSection:(NSInteger)p1;
	-(NSString *) tableView:(UITableView *)p0 titleForFooterInSection:(NSInteger)p1;
	-(UIView *) tableView:(UITableView *)p0 viewForHeaderInSection:(NSInteger)p1;
	-(UIView *) tableView:(UITableView *)p0 viewForFooterInSection:(NSInteger)p1;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface ReactiveUI_ViewModelViewHost : ReactiveUI_ReactiveViewController {
}
	-(id) init;
@end

@interface ReactiveUI_RoutedViewHost : ReactiveUI_ReactiveNavigationController {
}
	-(void) pushViewController:(UIViewController *)p0 animated:(BOOL)p1;
	-(UIViewController *) popViewControllerAnimated:(BOOL)p0;
	-(id) init;
@end


