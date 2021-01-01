/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AutoBugCaptureCore/DiagnosticReportGenerator.h>
#import <libobjc.A.dylib/NetDiagnosticsShimDelegate.h>

@class NetDiagnosticsShim, NSMutableDictionary, NSDictionary, NSDate, NSString;

@interface NetworkDiagnosticsReportGenerator : DiagnosticReportGenerator <NetDiagnosticsShimDelegate> {

	NetDiagnosticsShim* _netDiags;
	NSMutableDictionary* _options;
	NSDictionary* _netDiagsResults;
	NSDate* _reportStart;

}

@property (nonatomic,retain) NetDiagnosticsShim * netDiags;               //@synthesize netDiags=_netDiags - In the implementation block
@property (nonatomic,retain) NSDictionary * netDiagsResults;              //@synthesize netDiagsResults=_netDiagsResults - In the implementation block
@property (nonatomic,retain) NSDate * reportStart;                        //@synthesize reportStart=_reportStart - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * options;               //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)options;
-(void)setOptions:(NSMutableDictionary *)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NetDiagnosticsShim *)netDiags;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
-(void)setNetDiags:(NetDiagnosticsShim *)arg1 ;
-(BOOL)startReportGeneration;
-(void)setNetDiagsResults:(NSDictionary *)arg1 ;
-(BOOL)startNetDiagnosticsTaskWithReply:(/*^block*/id)arg1 ;
-(NSDictionary *)netDiagsResults;
-(id)createDefaultTaskDictionaryWithTaskName:(const char*)arg1 ;
-(NSDate *)reportStart;
-(void)setReportStart:(NSDate *)arg1 ;
@end
