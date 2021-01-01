/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXPeopleBootstrapFlowController.h>

@class PXPeopleBootstrapConfirmationViewController, PXPeopleBootstrapFinalViewController, PHPerson;

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController {

	PXPeopleBootstrapConfirmationViewController* _confirmationViewController;
	PXPeopleBootstrapFinalViewController* _finalViewController;

}

@property (nonatomic,retain) PXPeopleBootstrapConfirmationViewController * confirmationViewController;              //@synthesize confirmationViewController=_confirmationViewController - In the implementation block
@property (nonatomic,retain) PXPeopleBootstrapFinalViewController * finalViewController;                            //@synthesize finalViewController=_finalViewController - In the implementation block
@property (nonatomic,readonly) PHPerson * sourcePerson; 
-(void)done:(id)arg1 ;
-(void)computeViewControllersForBootstrapFlow;
-(void)recomputeViewControllersForChangeInKeyPath:(id)arg1 ;
-(PHPerson *)sourcePerson;
-(PXPeopleBootstrapConfirmationViewController *)confirmationViewController;
-(PXPeopleBootstrapFinalViewController *)finalViewController;
-(id)_postNamingViewController;
-(void)setConfirmationViewController:(PXPeopleBootstrapConfirmationViewController *)arg1 ;
-(void)setFinalViewController:(PXPeopleBootstrapFinalViewController *)arg1 ;
@end

