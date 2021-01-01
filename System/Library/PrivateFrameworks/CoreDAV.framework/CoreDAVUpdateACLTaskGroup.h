/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>
#import <CoreDAV/CoreDAVACLTaskDelegate.h>

@class NSSet, NSURL, CoreDAVPropFindTask, NSString;

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate> {

	int _state;
	NSSet* _aceItems;
	NSURL* _url;
	CoreDAVPropFindTask* _fetchTask;

}

@property (nonatomic,retain) NSSet * aceItems;                             //@synthesize aceItems=_aceItems - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) CoreDAVPropFindTask * fetchTask;              //@synthesize fetchTask=_fetchTask - In the implementation block
@property (assign,nonatomic) int state;                                    //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)setFetchTask:(CoreDAVPropFindTask *)arg1 ;
-(CoreDAVPropFindTask *)fetchTask;
-(void)_startGetACL;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(NSSet *)aceItems;
-(void)_startSetACLWithAccessControlEntities:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4 ;
-(void)setAceItems:(NSSet *)arg1 ;
@end

