/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, ManagedCatalogPreview;

@interface ManagedCatalogModalityMetadata : NSManagedObject

@property (copy,nonatomic) NSString * abridgedSummary; 
@property (copy,nonatomic) NSString * identifier; 
@property (copy,nonatomic) NSString * sharingURL; 
@property (copy,nonatomic) NSString * summary; 
@property (retain,nonatomic) NSSet * artwork; 
@property (retain,nonatomic) ManagedCatalogPreview * preview; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

