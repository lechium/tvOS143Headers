/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPPlaybackImageLoader <NSObject>
@required
-(void)invalidate;
-(void)cancelImageLoadingForIdentifiers:(id)arg1;
-(id)loadImagesForTimes:(id)arg1 maxSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3;
-(double)closestImageTimeForTime:(double)arg1;

@end

