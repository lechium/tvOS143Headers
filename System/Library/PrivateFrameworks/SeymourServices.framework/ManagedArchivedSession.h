/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, ManagedScoreSummary;

@interface ManagedArchivedSession : NSManagedObject

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double percentageCompleted; 
@property (copy,nonatomic) NSString * sessionIdentifier; 
@property (copy,nonatomic) NSDate * startDate; 
@property (copy,nonatomic) NSString * watchConnectionState; 
@property (copy,nonatomic) NSString * workoutIdentifier; 
@property (retain,nonatomic) ManagedScoreSummary * scoreSummary; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

