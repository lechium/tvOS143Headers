/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXPlacesMapBarButtonsDelegate.h>
#import <libobjc.A.dylib/PXGridPresentationBarsUpdateDelegate.h>

@class PXProgrammaticNavigationDestination, PXPlacesMapFetchResultViewController, UIViewController, UISegmentedControl, NSString;

@interface PXPlacesMapContainerViewController : UIViewController <PXPlacesMapBarButtonsDelegate, PXGridPresentationBarsUpdateDelegate> {

	BOOL _gridControllerEditing;
	PXProgrammaticNavigationDestination* _px_navigationDestination;
	PXPlacesMapFetchResultViewController* _fetchResultViewController;
	UIViewController* _currentViewController;
	UISegmentedControl* _subviewControl;

}

@property (nonatomic,retain) UIViewController * currentViewController;                                        //@synthesize currentViewController=_currentViewController - In the implementation block
@property (nonatomic,retain) UISegmentedControl * subviewControl;                                             //@synthesize subviewControl=_subviewControl - In the implementation block
@property (assign,nonatomic) BOOL gridControllerEditing;                                                      //@synthesize gridControllerEditing=_gridControllerEditing - In the implementation block
@property (nonatomic,readonly) PXPlacesMapFetchResultViewController * fetchResultViewController;              //@synthesize fetchResultViewController=_fetchResultViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)viewDidLoad;
-(void)loadView;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)px_navigationDestination;
-(UIViewController *)currentViewController;
-(void)setCurrentViewController:(UIViewController *)arg1 ;
-(void)viewController:(id)arg1 didUpdateBarsAnimated:(BOOL)arg2 isSelecting:(BOOL)arg3 ;
-(void)viewControllerDidUpdateNavigationItemAppearance:(id)arg1 ;
-(void)setBarButtonItems:(id)arg1 ;
-(void)_switchChildViewControllerFrom:(id)arg1 to:(id)arg2 ;
-(void)subviewControlChanged:(id)arg1 ;
-(void)_resetNavigationItem;
-(PXPlacesMapFetchResultViewController *)fetchResultViewController;
-(UISegmentedControl *)subviewControl;
-(void)setSubviewControl:(UISegmentedControl *)arg1 ;
-(BOOL)gridControllerEditing;
-(void)setGridControllerEditing:(BOOL)arg1 ;
@end
