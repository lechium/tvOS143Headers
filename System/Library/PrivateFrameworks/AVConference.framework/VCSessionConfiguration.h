/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSCopying;
@class NSObject;

@interface VCSessionConfiguration : NSObject {

	long long _sessionMode;
	NSObject*<NSCopying> _reportingHierarchyToken;
	BOOL _oneToOneModeEnabled;

}

@property (assign,nonatomic) long long sessionMode;                                              //@synthesize sessionMode=_sessionMode - In the implementation block
@property (nonatomic,retain) NSObject*<NSCopying> reportingHierarchyToken;                       //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
@property (assign,getter=isOneToOneModeEnabled,nonatomic) BOOL oneToOneModeEnabled;              //@synthesize oneToOneModeEnabled=_oneToOneModeEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<NSCopying>)reportingHierarchyToken;
-(void)setReportingHierarchyToken:(NSObject*<NSCopying>)arg1 ;
-(long long)sessionMode;
-(BOOL)applyConfigurationUsingClientDict:(id)arg1 ;
-(void)setSessionMode:(long long)arg1 ;
-(id)initWithClientDictionary:(id)arg1 ;
-(BOOL)updateWithClientDictionary:(id)arg1 ;
-(BOOL)isOneToOneModeEnabled;
-(void)setOneToOneModeEnabled:(BOOL)arg1 ;
@end

