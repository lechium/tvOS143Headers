/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData, NSUUID;

@interface WPDataTransfer : NSObject {

	BOOL _receivedFirstPacket;
	unsigned short _currentDataSize;
	NSMutableData* _currentReceivedData;
	NSUUID* _peerUUID;

}

@property (nonatomic,retain) NSMutableData * currentReceivedData;              //@synthesize currentReceivedData=_currentReceivedData - In the implementation block
@property (assign,nonatomic) unsigned short currentDataSize;                   //@synthesize currentDataSize=_currentDataSize - In the implementation block
@property (assign,nonatomic) BOOL receivedFirstPacket;                         //@synthesize receivedFirstPacket=_receivedFirstPacket - In the implementation block
@property (nonatomic,retain) NSUUID * peerUUID;                                //@synthesize peerUUID=_peerUUID - In the implementation block
-(void)setCurrentReceivedData:(NSMutableData *)arg1 ;
-(void)setReceivedFirstPacket:(BOOL)arg1 ;
-(BOOL)receivedFirstPacket;
-(void)setCurrentDataSize:(unsigned short)arg1 ;
-(unsigned short)currentDataSize;
-(NSUUID *)peerUUID;
-(NSMutableData *)currentReceivedData;
-(id)initDataTransferForPeer:(id)arg1 ;
-(void)resetTransfer;
-(BOOL)addNewData:(id)arg1 ;
-(void)setPeerUUID:(NSUUID *)arg1 ;
@end

