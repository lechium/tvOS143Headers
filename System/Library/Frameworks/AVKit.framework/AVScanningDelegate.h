/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVScanningDelegate <NSObject>
@optional
-(long long)playerViewController:(id)arg1 scanFromElapsedTime:(SCD_Struct_AV1)arg2 rate:(double)arg3 imageBlock:(/*^block*/id)arg4;
-(void)stopScanningPlayerViewController:(id)arg1;
-(BOOL)playerViewController:(id)arg1 shouldHandleScanningForPlayerItem:(id)arg2;

@end

