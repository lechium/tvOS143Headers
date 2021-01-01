/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface KTLoggableData : NSObject <NSSecureCoding> {

	BOOL _successfulSync;
	BOOL _marked;
	BOOL _notInSyncedData;
	NSData* _deviceID;
	NSData* _clientData;
	NSData* _deviceVRFOutput;
	NSData* _clientDataVRFOutput;

}

@property (retain) NSData * deviceVRFOutput;                  //@synthesize deviceVRFOutput=_deviceVRFOutput - In the implementation block
@property (retain) NSData * clientDataVRFOutput;              //@synthesize clientDataVRFOutput=_clientDataVRFOutput - In the implementation block
@property (retain) NSData * clientData;                       //@synthesize clientData=_clientData - In the implementation block
@property (assign) BOOL notInSyncedData;                      //@synthesize notInSyncedData=_notInSyncedData - In the implementation block
@property (copy) NSData * deviceID;                           //@synthesize deviceID=_deviceID - In the implementation block
@property (assign) BOOL successfulSync;                       //@synthesize successfulSync=_successfulSync - In the implementation block
@property (assign) BOOL marked;                               //@synthesize marked=_marked - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)deviceID;
-(void)setDeviceID:(NSData *)arg1 ;
-(NSData *)clientData;
-(void)setClientData:(NSData *)arg1 ;
-(NSData *)clientDataVRFOutput;
-(void)setClientDataVRFOutput:(NSData *)arg1 ;
-(BOOL)successfulSync;
-(BOOL)marked;
-(BOOL)notInSyncedData;
-(id)initWithClientData:(id)arg1 ;
-(void)setSuccessfulSync:(BOOL)arg1 ;
-(void)setMarked:(BOOL)arg1 ;
-(void)setNotInSyncedData:(BOOL)arg1 ;
-(NSData *)deviceVRFOutput;
-(void)setDeviceVRFOutput:(NSData *)arg1 ;
@end
