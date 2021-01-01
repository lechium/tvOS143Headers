/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CALayer, NSString;

@interface PKDelayedAnimationTracker : NSObject {

	CALayer* _layer;
	NSString* _key;
	/*^block*/id _removalAction;

}

@property (nonatomic,__weak,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) id removalAction;                        //@synthesize removalAction=_removalAction - In the implementation block
-(id)init;
-(NSString *)key;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 key:(id)arg2 ;
-(void)removeAnimationIfPossible;
-(id)removalAction;
-(void)setRemovalAction:(id)arg1 ;
@end
