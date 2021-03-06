/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXCMMWorkflowCoordinatorDelegate.h>
#import <libobjc.A.dylib/PXCMMWorkflowPresenting.h>

@class PXGadgetNavigationHelper, PXCMMWorkflowCoordinator, NSString;

@interface PXCMMWorkflowCoordinatorPresenter : NSObject <PXCMMWorkflowCoordinatorDelegate, PXCMMWorkflowPresenting> {

	PXGadgetNavigationHelper* _navigationHelper;
	PXCMMWorkflowCoordinator* _workflowCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)shareOriginForSession:(id)arg1 workflowCoordinator:(id)arg2 ;
-(void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4 ;
-(id)workflowViewControllerWithContext:(id)arg1 ;
-(void)cancelWorkflow;
-(id)initWithNavigationHelper:(id)arg1 ;
@end

