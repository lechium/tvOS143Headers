/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVNumberValueBase.h>

@interface HAPTLVSignedNumberValue : HAPTLVNumberValueBase
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)_parseFromData:(const char*)arg1 length:(unsigned long long)arg2 status:(int*)arg3 ;
-(id)_serialize;
@end

