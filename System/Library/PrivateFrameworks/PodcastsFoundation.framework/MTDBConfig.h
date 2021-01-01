/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTCoreDataContainerConfigProvider.h>

@class NSManagedObjectModel;

@interface MTDBConfig : NSObject <MTCoreDataContainerConfigProvider> {

	NSManagedObjectModel* _model;

}

@property (nonatomic,retain) NSManagedObjectModel * model;              //@synthesize model=_model - In the implementation block
-(NSManagedObjectModel *)model;
-(id)managedObjectModel;
-(void)setModel:(NSManagedObjectModel *)arg1 ;
-(id)databaseFileUrl;
-(id)peristentStoreOptions;
@end

