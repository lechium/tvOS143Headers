/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TUDTMFSoundPlayer : NSObject {

	/*^block*/id _playSystemSoundHandler;

}

@property (nonatomic,copy) id playSystemSoundHandler;              //@synthesize playSystemSoundHandler=_playSystemSoundHandler - In the implementation block
-(id)init;
-(void)attemptToPlaySoundType:(long long)arg1 ;
-(id)playSystemSoundHandler;
-(BOOL)attemptToPlayKey:(unsigned char)arg1 ;
-(void)setPlaySystemSoundHandler:(id)arg1 ;
@end

