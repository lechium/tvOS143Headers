/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, PBRequest, NSString;


@protocol DRSDSRequestObject <NSObject>
@property (nonatomic,readonly) NSUUID * uniqueID; 
@property (nonatomic,readonly) PBRequest * pbRequest; 
@property (nonatomic,readonly) id<DRSDecisionServerBatchRequest> pbBatchInstance; 
@property (nonatomic,readonly) Class pbBatchResponseClass; 
@property (nonatomic,readonly) NSString * functionName; 
@required
-(NSUUID *)uniqueID;
-(NSString *)functionName;
-(PBRequest *)pbRequest;
-(id<DRSDecisionServerBatchRequest>)pbBatchInstance;
-(Class)pbBatchResponseClass;

@end

