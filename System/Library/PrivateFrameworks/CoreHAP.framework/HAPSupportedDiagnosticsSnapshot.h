/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPDiagnosticsSnapshotFormatWrapper, HAPDiagnosticsSnapshotTypeWrapper, NSString;

@interface HAPSupportedDiagnosticsSnapshot : NSObject <NSCopying, HAPTLVProtocol> {

	HAPDiagnosticsSnapshotFormatWrapper* _format;
	HAPDiagnosticsSnapshotTypeWrapper* _type;

}

@property (nonatomic,retain) HAPDiagnosticsSnapshotFormatWrapper * format;              //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) HAPDiagnosticsSnapshotTypeWrapper * type;                  //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)setType:(HAPDiagnosticsSnapshotTypeWrapper *)arg1 ;
-(HAPDiagnosticsSnapshotTypeWrapper *)type;
-(HAPDiagnosticsSnapshotFormatWrapper *)format;
-(void)setFormat:(HAPDiagnosticsSnapshotFormatWrapper *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithFormat:(id)arg1 type:(id)arg2 ;
@end

