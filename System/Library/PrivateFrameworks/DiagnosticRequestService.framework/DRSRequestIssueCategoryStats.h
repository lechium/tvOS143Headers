/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticRequestService/DRSRequestStats.h>

@class NSDictionary, NSString;

@interface DRSRequestIssueCategoryStats : DRSRequestStats

@property (nonatomic,readonly) NSDictionary * perIssueDescriptionStats; 
@property (nonatomic,readonly) NSString * issueCategory; 
+(id)keyName;
+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg1 ;
-(NSString *)issueCategory;
-(NSDictionary *)perIssueDescriptionStats;
@end

