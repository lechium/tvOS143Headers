/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPStoreSocialRequestOperationDataSource.h>

@class MPModelSocialPerson, NSString;

@interface MPStoreSocialRemoveFollowerOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource> {

	MPModelSocialPerson* _person;

}

@property (nonatomic,retain) MPModelSocialPerson * person;              //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPModelSocialPerson *)person;
-(void)setPerson:(MPModelSocialPerson *)arg1 ;
-(id)queryItems;
-(id)bagKey;
-(id)httpBody;
-(long long)httpMethod;
-(long long)httpBodyType;
@end
