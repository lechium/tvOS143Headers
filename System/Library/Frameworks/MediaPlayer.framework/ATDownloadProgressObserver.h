/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ATDownloadProgressObserver <NSObject>
@required
-(void)atcDidEnqueueAsset:(id)arg1;
-(void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2;
-(void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2;
-(void)atcDidUpdateDownloadStateForAssets:(id)arg1;

@end

