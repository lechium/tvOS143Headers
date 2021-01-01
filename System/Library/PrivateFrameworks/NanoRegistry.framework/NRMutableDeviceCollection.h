/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRMutableStateBase.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NRPBMutableDeviceCollection, NSMutableDictionary, NRMutableDevice, NSUUID;

@interface NRMutableDeviceCollection : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {

	NRPBMutableDeviceCollection* _protobuf;
	NSMutableDictionary* _deviceCollection;
	NSMutableDictionary* _childMap;

}

@property (nonatomic,readonly) NRMutableDevice * activeDevice; 
@property (nonatomic,retain) NSUUID * activeDeviceID; 
@property (getter=paired,nonatomic,readonly) BOOL isPaired; 
@property (getter=allAltAccount,nonatomic,readonly) BOOL isAllAltAccount; 
@property (nonatomic,retain) NRPBMutableDeviceCollection * protobuf;                   //@synthesize protobuf=_protobuf - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setProtobuf:(NRPBMutableDeviceCollection *)arg1 ;
-(NRPBMutableDeviceCollection *)protobuf;
-(BOOL)paired;
-(id)initWithProtobuf:(id)arg1 ;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(NRMutableDevice *)activeDevice;
-(BOOL)allAltAccount;
-(NSUUID *)activeDeviceID;
-(id)deviceForPairingID:(id)arg1 ;
-(void)_createIndex;
-(id)allPairingIDs;
-(void)setDevice:(id)arg1 forPairingID:(id)arg2 ;
-(void)removeDeviceForPairingID:(id)arg1 ;
-(id)_diffsToChangeActiveDeviceToDeviceID:(id)arg1 ;
-(void)setActiveDeviceID:(NSUUID *)arg1 ;
@end
