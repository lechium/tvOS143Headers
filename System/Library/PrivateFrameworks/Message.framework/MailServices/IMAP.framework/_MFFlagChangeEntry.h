/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface _MFFlagChangeEntry : NSObject {

	NSString* path;
	unsigned uid;
	NSDictionary* changes;
	unsigned connectionTag;
	double commitTime;

}

@property (readonly) NSString * path; 
@property (readonly) unsigned uid; 
@property (readonly) NSDictionary * changes; 
@property (assign) double commitTime; 
@property (assign) unsigned connectionTag; 
-(void)dealloc;
-(NSString *)path;
-(NSDictionary *)changes;
-(double)commitTime;
-(void)setCommitTime:(double)arg1 ;
-(unsigned)uid;
-(id)initWithPath:(id)arg1 UID:(unsigned)arg2 changes:(id)arg3 ;
-(unsigned)connectionTag;
-(void)setConnectionTag:(unsigned)arg1 ;
@end

