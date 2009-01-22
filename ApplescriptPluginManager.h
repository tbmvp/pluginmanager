//
//  ApplescriptPluginManager.h
//  SiteTagger
//
//  Created by Grayson Hansard on 7/20/06.
//  Copyright 2006 From Concentrate Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PluginManager.h"
#import "PluginManagerProtocol.h"
#import "NSApplescript+FCSAdditions.h"
#import "PluginManagerApplescriptIncludes.h"

@interface ApplescriptPluginManager : NSObject <PluginManagerProtocol> {
	NSMutableDictionary *_plugins;
}

-(NSString *)name;
-(NSArray *)extensions;
-(NSArray *)pluginsForProperty:(NSString *)property forValue:(id)forValue withValue:(id)withValue;
-(void)runPlugin:(NSDictionary *)plugin forValue:(id)forValue withValue:(id)withValue;
-(id)runScriptAtPath:(NSString *)path;

@end
