/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSData, NSDate, NSUUID;

@interface DRSRequestMO : NSManagedObject

@property (nonatomic,copy) NSString * build; 
@property (nonatomic,copy) NSNumber * cachedLogSize; 
@property (nonatomic,retain) NSData * contextDictionaryData; 
@property (assign,nonatomic) short decisionServerDecision; 
@property (nonatomic,copy) NSString * errorDescription; 
@property (assign,nonatomic) BOOL hasBeenCountedByTelemetry; 
@property (nonatomic,copy) NSString * issueCategory; 
@property (nonatomic,copy) NSString * issueDescription; 
@property (nonatomic,copy) NSString * logPath; 
@property (nonatomic,copy) NSDate * requestDate; 
@property (nonatomic,copy) NSUUID * requestID; 
@property (assign,nonatomic) long long requestMCT; 
@property (assign,nonatomic) long long requestState; 
@property (nonatomic,copy) NSString * teamID; 
@property (assign,nonatomic) short uploadAttemptCount; 
+(id)fetchRequest;
@end

