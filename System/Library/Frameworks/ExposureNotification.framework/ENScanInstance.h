/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUXPCCodable.h>

@interface ENScanInstance : NSObject <CUXPCCodable> {

	unsigned char _minimumAttenuation;
	unsigned char _typicalAttenuation;
	long long _secondsSinceLastScan;

}

@property (assign,nonatomic) unsigned char minimumAttenuation;              //@synthesize minimumAttenuation=_minimumAttenuation - In the implementation block
@property (assign,nonatomic) unsigned char typicalAttenuation;              //@synthesize typicalAttenuation=_typicalAttenuation - In the implementation block
@property (assign,nonatomic) long long secondsSinceLastScan;                //@synthesize secondsSinceLastScan=_secondsSinceLastScan - In the implementation block
-(id)description;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(unsigned char)minimumAttenuation;
-(void)setMinimumAttenuation:(unsigned char)arg1 ;
-(unsigned char)typicalAttenuation;
-(void)setTypicalAttenuation:(unsigned char)arg1 ;
-(long long)secondsSinceLastScan;
-(void)setSecondsSinceLastScan:(long long)arg1 ;
@end

