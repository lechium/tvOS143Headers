/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVDescription.h>

@interface HAPNumberParser : HAPTLVDescription {

	unsigned long long _decodedNumber;

}

@property (nonatomic,readonly) unsigned long long decodedNumber;              //@synthesize decodedNumber=_decodedNumber - In the implementation block
-(id)initWithTLVData:(id)arg1 ;
-(unsigned long long)decodedNumber;
@end

