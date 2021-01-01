/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface POPodcastRevision : NSObject {

	BOOL _isPodcastCollection;
	unsigned long long _revisionID;
	long long _revisionType;
	NSString* _objectID;

}

@property (assign,nonatomic) unsigned long long revisionID;              //@synthesize revisionID=_revisionID - In the implementation block
@property (assign,nonatomic) long long revisionType;                     //@synthesize revisionType=_revisionType - In the implementation block
@property (nonatomic,retain) NSString * objectID;                        //@synthesize objectID=_objectID - In the implementation block
@property (assign) BOOL isPodcastCollection;                             //@synthesize isPodcastCollection=_isPodcastCollection - In the implementation block
-(id)description;
-(NSString *)objectID;
-(void)setObjectID:(NSString *)arg1 ;
-(unsigned long long)revisionID;
-(void)setRevisionID:(unsigned long long)arg1 ;
-(void)setRevisionType:(long long)arg1 ;
-(void)setIsPodcastCollection:(BOOL)arg1 ;
-(long long)revisionType;
-(id)deletedModelObject;
-(BOOL)isPodcastCollection;
@end

