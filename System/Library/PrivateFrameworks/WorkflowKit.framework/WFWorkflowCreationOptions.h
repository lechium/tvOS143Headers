/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFWorkflowRecord, NSString;

@interface WFWorkflowCreationOptions : NSObject {

	BOOL _deleted;
	WFWorkflowRecord* _record;
	NSString* _identifier;
	unsigned long long _location;
	NSString* _collectionIdentifier;

}

@property (nonatomic,readonly) WFWorkflowRecord * record;                //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long location;                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL deleted;                               //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,copy) NSString * collectionIdentifier;              //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)location;
-(void)setLocation:(unsigned long long)arg1 ;
-(NSString *)collectionIdentifier;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)deleted;
-(id)initWithRecord:(id)arg1 ;
-(WFWorkflowRecord *)record;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
@end

