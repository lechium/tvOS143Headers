/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CAMediaTimingFunction : NSObject <NSSecureCoding> {

	CAMediaTimingFunctionPrivate* _priv;

}
+(id)uiFunctionWithControlPoints:(const CGPoint*)arg1 ;
+(id)_kbTimingFunction;
+(BOOL)supportsSecureCoding;
+(id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
+(id)functionWithName:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getControlPointAtIndex:(unsigned long long)arg1 values:(float)arg2 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
-(void)_getPoints:(double*)arg1 ;
-(float)_solveForInput:(float)arg1 ;
-(id)CAMLType;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
@end

