/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpotlight/CSXPCConnection.h>

@interface CSIndexConnection : CSXPCConnection {

	BOOL _previouslyInitialized;

}

@property (nonatomic,readonly) BOOL previouslyInitialized;              //@synthesize previouslyInitialized=_previouslyInitialized - In the implementation block
+(id)sharedConnection;
-(void)handleError:(id)arg1 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)previouslyInitialized;
@end

