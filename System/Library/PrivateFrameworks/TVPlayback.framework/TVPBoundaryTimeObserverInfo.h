/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface TVPBoundaryTimeObserverInfo : NSObject {

	NSArray* _times;
	/*^block*/id _handler;
	id _tokenFromAVPlayer;

}

@property (nonatomic,copy) NSArray * times;                     //@synthesize times=_times - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) id tokenFromAVPlayer;              //@synthesize tokenFromAVPlayer=_tokenFromAVPlayer - In the implementation block
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(NSArray *)times;
-(void)setTimes:(NSArray *)arg1 ;
-(id)tokenFromAVPlayer;
-(void)setTokenFromAVPlayer:(id)arg1 ;
@end

