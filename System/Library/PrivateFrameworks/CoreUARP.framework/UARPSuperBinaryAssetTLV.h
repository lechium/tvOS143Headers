/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUARP/CoreUARP-Structs.h>
@class NSURL, NSData, NSString;

@interface UARPSuperBinaryAssetTLV : NSObject {

	unsigned _type;
	NSURL* _url;
	NSData* _data;
	NSString* _string;
	unsigned char _val8;
	unsigned short _val16;
	unsigned _val32;
	unsigned long long _val64;
	UARPVersion _version;
	int _valueType;

}
+(id)decomposeTLVs:(id)arg1 ;
-(id)description;
-(id)initWithType:(unsigned long long)arg1 stringValue:(id)arg2 ;
-(id)initWithType:(unsigned long long)arg1 version:(UARPVersion*)arg2 ;
-(id)initWithType:(unsigned long long)arg1 urlValue:(id)arg2 ;
-(id)initWithType:(unsigned long long)arg1 unsignedInt32:(unsigned)arg2 ;
-(id)initWithType:(unsigned long long)arg1 dataValue:(id)arg2 ;
-(id)generateTLV:(id*)arg1 ;
-(id)initWithType:(unsigned long long)arg1 unsignedInt8:(unsigned char)arg2 ;
-(id)initWithType:(unsigned long long)arg1 unsignedInt16:(unsigned short)arg2 ;
-(id)initWithType:(unsigned long long)arg1 unsignedInt64:(unsigned long long)arg2 ;
-(id)initWithType:(unsigned long long)arg1 tagValue:(id)arg2 ;
@end
