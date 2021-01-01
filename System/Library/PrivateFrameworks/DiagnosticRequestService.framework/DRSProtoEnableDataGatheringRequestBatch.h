/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/DRSDecisionServerBatchRequest.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DRSProtoClientDeviceMetadata, NSMutableArray, NSString;

@interface DRSProtoEnableDataGatheringRequestBatch : PBCodable <DRSDecisionServerBatchRequest, CKCodeOperationMessageMutation, NSCopying> {

	DRSProtoClientDeviceMetadata* _clientMetadata;
	NSMutableArray* _dataGatheringRequests;

}

@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) DRSProtoClientDeviceMetadata * clientMetadata; 
@property (nonatomic,retain) NSMutableArray * requests; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) DRSProtoClientDeviceMetadata * clientMetadata;              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataGatheringRequests;                     //@synthesize dataGatheringRequests=_dataGatheringRequests - In the implementation block
+(Class)dataGatheringRequestsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)requests;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(DRSProtoClientDeviceMetadata *)clientMetadata;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)setClientMetadata:(DRSProtoClientDeviceMetadata *)arg1 ;
-(BOOL)hasClientMetadata;
-(void)addDataGatheringRequests:(id)arg1 ;
-(unsigned long long)dataGatheringRequestsCount;
-(void)clearDataGatheringRequests;
-(id)dataGatheringRequestsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)dataGatheringRequests;
-(void)setDataGatheringRequests:(NSMutableArray *)arg1 ;
@end

