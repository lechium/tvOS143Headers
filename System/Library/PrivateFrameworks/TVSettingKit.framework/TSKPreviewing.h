/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TSKPreviewing <NSObject>
@property (assign,nonatomic,__weak) id<TSKPreviewingDelegate> previewingDelegate; 
@required
-(id<TSKPreviewingDelegate>)previewingDelegate;
-(id)defaultIndexPathForPreview;
-(id)previewForItemAtIndexPath:(id)arg1;
-(id)sourceViewForSlideTransition;
-(BOOL)hasFullscreenPreview;
-(void)setPreviewingDelegate:(id)arg1;

@end

