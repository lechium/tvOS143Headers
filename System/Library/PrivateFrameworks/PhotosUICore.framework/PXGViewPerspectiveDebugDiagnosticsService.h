/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXDiagnosticsService.h>

@class PXGView;

@interface PXGViewPerspectiveDebugDiagnosticsService : PXDiagnosticsService {

	PXGView* _gridView;

}

@property (nonatomic,readonly) PXGView * gridView;              //@synthesize gridView=_gridView - In the implementation block
-(id)title;
-(BOOL)canPerformAction;
-(PXGView *)gridView;
-(void)performAction;
-(id)initWithItemProviders:(id)arg1 ;
@end

