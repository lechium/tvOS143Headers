/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DNDState;

@interface DNDSStateProvider : NSObject {

	DNDState* _lastCalculatedState;

}

@property (copy) DNDState * lastCalculatedState;              //@synthesize lastCalculatedState=_lastCalculatedState - In the implementation block
-(void)setLastCalculatedState:(DNDState *)arg1 ;
-(id)recalculateStateForSnapshot:(id)arg1 ;
-(DNDState *)lastCalculatedState;
@end

