/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DMFApplicationInstallProgress : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _state;
	unsigned long long _phase;
	double _fractionCompleted;

}

@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long phase;              //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) double fractionCompleted;              //@synthesize fractionCompleted=_fractionCompleted - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(double)fractionCompleted;
-(unsigned long long)phase;
-(id)initWithState:(unsigned long long)arg1 phase:(unsigned long long)arg2 fractionCompleted:(double)arg3 ;
@end

