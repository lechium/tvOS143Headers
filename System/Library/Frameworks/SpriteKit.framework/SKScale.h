/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKScale : SKAction {

	SKCScale* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)scaleBy:(double)arg1 duration:(double)arg2 ;
+(id)scaleTo:(double)arg1 duration:(double)arg2 ;
+(id)scaleXBy:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)scaleXTo:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)scaleXTo:(double)arg1 duration:(double)arg2 ;
+(id)scaleYTo:(double)arg1 duration:(double)arg2 ;
+(id)scaleToSize:(CGSize)arg1 duration:(double)arg2 ;
+(id)scaleXBy:(double)arg1 duration:(double)arg2 ;
+(id)scaleYBy:(double)arg1 duration:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

