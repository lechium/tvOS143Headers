/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, ManagedArtwork, ManagedCatalogWorkoutMetadata;

@interface ManagedMusicTrack : NSManagedObject

@property (copy,nonatomic) NSString * album; 
@property (copy,nonatomic) NSString * artist; 
@property (assign,nonatomic) double duration; 
@property (copy,nonatomic) NSString * identifier; 
@property (assign,nonatomic) double startTime; 
@property (copy,nonatomic) NSString * title; 
@property (retain,nonatomic) ManagedArtwork * artwork; 
@property (retain,nonatomic) ManagedCatalogWorkoutMetadata * catalogWorkoutMetadata; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
