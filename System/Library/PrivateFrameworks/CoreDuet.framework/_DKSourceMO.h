/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSSet;

@interface _DKSourceMO : NSManagedObject

@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,copy) NSString * deviceID; 
@property (nonatomic,copy) NSString * groupID; 
@property (nonatomic,copy) NSString * itemID; 
@property (nonatomic,copy) NSString * sourceID; 
@property (nonatomic,copy) NSNumber * userID; 
@property (nonatomic,retain) NSSet * product; 
+(id)fetchRequest;
@end

