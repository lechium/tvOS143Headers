/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionKeyPressedExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface OKActionKeyPressed : OKAction <OKActionKeyPressedExports, NSSecureCoding> {

	BOOL isKeyUp;
	NSString* keyPressed;
	double timestamp;

}

@property (nonatomic,retain) NSString * keyPressed; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) BOOL isKeyUp; 
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)keyPressedActionWithKey:(id)arg1 atTime:(double)arg2 isKeyUp:(BOOL)arg3 withLocation:(CGPoint)arg4 context:(id)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setKeyPressed:(NSString *)arg1 ;
-(NSString *)keyPressed;
-(BOOL)isKeyUp;
@end

