/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTDataUsage;

@interface CTDataUsed : NSObject <NSCopying, NSSecureCoding> {

	CTDataUsage* _native;
	CTDataUsage* _proxied;

}

@property (nonatomic,readonly) CTDataUsage * native;               //@synthesize native=_native - In the implementation block
@property (nonatomic,readonly) CTDataUsage * proxied;              //@synthesize proxied=_proxied - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addUsage:(id)arg1 ;
-(CTDataUsage *)native;
-(CTDataUsage *)proxied;
-(void)addNativeUsage:(id)arg1 ;
-(void)addProxiedUsage:(id)arg1 ;
-(id)initWithUsage:(id)arg1 proxied:(id)arg2 ;
@end

