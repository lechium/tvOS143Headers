/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CMFallStats : NSObject <NSSecureCoding> {

	NSData* _data;
	BOOL _isNearFall;
	int _fallType;
	double _iOStime;

}

@property (nonatomic,readonly) double iOStime;               //@synthesize iOStime=_iOStime - In the implementation block
@property (nonatomic,readonly) int fallType;                 //@synthesize fallType=_fallType - In the implementation block
@property (nonatomic,readonly) BOOL isNearFall;              //@synthesize isNearFall=_isNearFall - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_decodeMeta;
-(id)initWithBufferAndLength:(char*)arg1 length:(unsigned long long)arg2 ;
-(id)itemsIterator;
-(double)iOStime;
-(int)fallType;
-(BOOL)isNearFall;
@end

