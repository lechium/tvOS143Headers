/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKSoundContext : NSObject {

	ALCdevice_structRef _device;
	ALCcontext_structRef _context;
	BOOL _suspended;

}

@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint listenerPosition; 
@property (assign,nonatomic) BOOL suspended; 
+(id)context;
+(id)currentContext;
-(id)init;
-(void)dealloc;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(double)gain;
-(void)setGain:(double)arg1 ;
-(void)setListenerPosition:(CGPoint)arg1 ;
-(CGPoint)listenerPosition;
-(void)makeCurrentContext;
@end

