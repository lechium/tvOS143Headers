/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXActionPerformer.h>

@class PXCPLUIStatus;

@interface PXCPLActionPerformer : PXActionPerformer {

	PXCPLUIStatus* _cplUIStatus;

}

@property (nonatomic,readonly) PXCPLUIStatus * cplUIStatus;              //@synthesize cplUIStatus=_cplUIStatus - In the implementation block
-(void)performActionWithCPLUIStatus:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(PXCPLUIStatus *)cplUIStatus;
@end

