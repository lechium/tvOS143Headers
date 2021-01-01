/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_xpc_object;
@class ML3MusicLibrary, NSObject;

@interface ML3MaintenanceTasksOperation : NSOperation {

	ML3MusicLibrary* _library;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                      //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
-(void)main;
-(NSObject*<OS_xpc_object>)activity;
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 activity:(id)arg2 ;
@end

