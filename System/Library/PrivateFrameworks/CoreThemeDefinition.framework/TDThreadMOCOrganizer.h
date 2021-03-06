/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSThread, CoreThemeDocument;

@interface TDThreadMOCOrganizer : NSObject {

	NSThread* mainThread;
	CoreThemeDocument* document;

}
-(id)init;
-(id)mainThread;
-(id)document;
-(id)initWithDocument:(id)arg1 mainThread:(id)arg2 ;
-(id)threadMOC;
-(id)mainMOC;
-(void)setThreadMOC:(id)arg1 ;
@end

